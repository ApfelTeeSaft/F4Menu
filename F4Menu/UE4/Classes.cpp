
#include "UE4.hpp"

#include "Classes.hpp"

namespace UE4
{
	class UObject* UObject::FindObjectFastImpl(const std::string& Name, EClassCastFlags RequiredType)
	{
		int ObjectNum = GObjects ? GObjects->Num() : GObjectsNew->Num();
		bool bOldGObj = GObjects ? true : false;

		for (int i = 0; i < ObjectNum; ++i)
		{
			UObject* Object = nullptr;
			if (bOldGObj)
				Object = GObjects->GetByIndex(i);
			else
				Object = GObjectsNew->GetByIndex(i);

			if (!Object)
				continue;

			if (Object->HasTypeFlag(RequiredType) && Object->GetName() == Name)
				return Object;
		}

		return nullptr;
	}

	class UObject* UObject::FindObjectImpl(const std::string& FullName, EClassCastFlags RequiredType)
	{
		int ObjectNum = GObjects.GetTypedPtr()->GetByIndex(0) ? GObjects->Num() : GObjectsNew->Num();
		bool bOldGObj = GObjects.GetTypedPtr()->GetByIndex(0) ? true : false;

		for (int i = 0; i < ObjectNum; ++i)
		{
			UObject* Object = nullptr;

			if (bOldGObj)
				Object = GObjects->GetByIndex(i);
			else
				Object = GObjectsNew->GetByIndex(i);

			if (!Object)
				continue;

			if (Object->HasTypeFlag(RequiredType) && Object->GetFullName() == FullName)
				return Object;
		}

		return nullptr;
	}

	std::string UObject::GetFullName() const
	{
		if (this && Class)
		{
			std::string Temp;

			for (UObject* NextOuter = Outer; NextOuter; NextOuter = NextOuter->Outer)
			{
				Temp = NextOuter->GetName() + "." + Temp;
			}

			std::string Name = Class->GetName();
			Name += " ";
			Name += Temp;
			Name += GetName();

			return Name;
		}

		return "None";
	}

	std::string UObject::GetName() const
	{
		return this ? Name.ToString() : "None";
	}

	bool UObject::HasTypeFlag(EClassCastFlags TypeFlags) const
	{
		return (Class->CastFlags & TypeFlags);
	}

	bool UObject::IsA(EClassCastFlags TypeFlags) const
	{
		return (Class->CastFlags & TypeFlags);
	}

	bool UObject::IsA(class UClass* TypeClass) const
	{
		return Class->IsSubclassOf(TypeClass);
	}

	bool UObject::IsDefaultObject() const
	{
		return (Flags & EObjectFlags::ClassDefaultObject);
	}

	bool UStruct::IsSubclassOf(const UStruct* Base) const
	{
		if (!Base)
			return false;

		for (const UStruct* Struct = this; Struct; Struct = Struct->Super)
		{
			if (Struct == Base)
				return true;
		}

		return false;
	}

	class UFunction* UClass::GetFunction(const std::string& ClassName, const std::string& FuncName) const
	{
		for (const UStruct* Clss = this; Clss; Clss = Clss->Super)
		{
			if (Clss->GetName() != ClassName)
				continue;

			for (UField* Field = Clss->Children; Field; Field = Field->Next)
			{
				if (Field->HasTypeFlag(EClassCastFlags::Function) && Field->GetName() == FuncName)
					return static_cast<class UFunction*>(Field);
			}
		}

		return nullptr;
	}
}