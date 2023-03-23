#include <iostream>


class Number
{
public:
	int Value;

public:
	// 맴버 이니셜라이저.
	Number()
		: Value(0)
	{

	}

	Number(int _Value)
		: Value(_Value)
	{

	}


	int operator[](size_t _Value)
	{
		return Value;
	}


	// 산술연산자
	int operator+(int _Value)
	{
		return Value + _Value;
	}

	int operator-(int _Value)
	{
		return Value - _Value;
	}

	int operator*(int _Value)
	{
		return Value * _Value;
	}

	int operator/(int _Value)
	{
		if (_Value == 0)
		{
			return -1;
		}
		return Value / _Value;
	}

	int operator%(int _Value)
	{
		return Value % _Value;
	}

	Number operator+(const Number& Other)
	{
		Number tmp = Number();
		tmp.Value = Value + Other.Value;

		return tmp;
	}

	Number operator-(const Number& Other)
	{
		Number tmp = Number();
		tmp.Value = Value - Other.Value;

		return tmp;
	}

	Number operator*(const Number& Other)
	{
		Number tmp = Number();
		tmp.Value = Value * Other.Value;

		return tmp;
	}

	Number operator/(const Number& Other)
	{
		if (Other.Value == 0)
		{
			return Number(-1);
		}

		Number tmp = Number();
		tmp.Value = Value / Other.Value;

		return tmp;
	}

	Number operator%(const Number& Other)
	{
		Number tmp = Number();
		tmp.Value = Value * Other.Value;

		return tmp;
	}


	// 증감 연산자
	void operator++()
	{
		Value++;
	}

	void operator++(int)
	{
		Value++;
	}

	void operator--()
	{
		Value--;
	}

	void operator--(int)
	{
		Value--;
	}


	// 비교 연산자
	bool operator==(const Number& Other)
	{
		if (Value == Other.Value)
		{
			return true;
		}
		return false;
	}

	bool operator!=(const Number& Other)
	{
		if (Value != Other.Value)
		{
			return true;
		}
		return false;
	}

	bool operator<(const Number& Other)
	{
		if (Value < Other.Value)
		{
			return true;
		}
		return false;
	}

	bool operator>(const Number& Other)
	{
		if (Value > Other.Value)
		{
			return true;
		}
		return false;
	}

	bool operator<=(const Number& Other)
	{
		if (Value <= Other.Value)
		{
			return true;
		}
		return false;
	}

	bool operator>=(const Number& Other)
	{
		if (Value >= Other.Value)
		{
			return true;
		}
		return false;
	}

	// 대입연산자
	Number& operator=(const Number& Other)
	{
		Value = Other.Value;

		return *this;
	}


	Number& operator+=(const Number& Other)
	{
		Value += Other.Value;
		return *this;
	}

	Number& operator-=(const Number& Other)
	{
		Value -= Other.Value;
		return *this;
	}

	Number& operator*=(const Number& Other)
	{
		Value *= Other.Value;
		return *this;
	}

	Number& operator/=(const Number& Other)
	{
		if (Other.Value == 0)
		{
			return *this;
		}
		Value /= Other.Value;
		return *this;
	}

	Number& operator%=(const Number& Other)
	{
		Value %= Other.Value;
		return *this;
	}

	// 논리 연산자
	bool operator&&(const Number& Other)
	{
		return Value && Other.Value;
	}

	bool operator||(const Number& Other)
	{
		return Value || Other.Value;
	}

	bool operator!()
	{
		return !Value;
	}

	//비트 연산자
	Number operator&(const Number Other)
	{
		Number tmp = Number();
		tmp.Value = Value & Other.Value;
		
		return tmp;
	}

	Number operator|(const Number Other)
	{
		Number tmp = Number();
		tmp.Value = Value | Other.Value;

		return tmp;
	}

	Number operator^(const Number Other)
	{
		Number tmp = Number();
		tmp.Value = Value ^ Other.Value;

		return tmp;
	}

	Number operator~()
	{
		Number tmp = Number();
		tmp.Value = ~Value;

		return tmp;
	}

	Number operator<<(int _Value)
	{
		Number tmp = *this;
		tmp.Value = Value << _Value;

		return tmp;
	}

	Number operator>>(int _Value)
	{
		Number tmp = *this;
		tmp.Value = Value >> _Value;

		return tmp;
	}

};


int main()
{
	Number NewNumber = 10;
	Number Other = 5;
	bool test = false;

	// 연산자 겹지정 함수라고 부릅니다.
	//NewNumber = NewNumber + 10;
	//NewNumber = NewNumber - 10;
	//NewNumber = NewNumber * 10;
	//NewNumber = NewNumber / 10;
	//NewNumber = NewNumber % 10;

	//NewNumber = NewNumber + Other;
	//NewNumber = NewNumber - Other;
	//NewNumber = NewNumber * Other;
	//NewNumber = NewNumber / Other;
	//NewNumber = NewNumber % Other;

	//++NewNumber;
	//--NewNumber;
	//NewNumber++;
	//NewNumber--;

	//test = NewNumber == Other;
	//test = NewNumber != Other;
	//test = NewNumber < Other;
	//test = NewNumber > Other;
	//test = NewNumber <= Other;
	//test = NewNumber >= Other;

	//NewNumber = Other;
	//NewNumber += Other;
	//NewNumber -= Other;
	//NewNumber *= Other;
	//NewNumber /= Other;
	//NewNumber %= Other;

	//test = NewNumber && Other;
	//test = NewNumber || Other;
	//test = !NewNumber;

	//NewNumber = NewNumber & Other;
	//NewNumber = NewNumber ^ Other;
	//NewNumber = NewNumber | Other;
	//NewNumber = ~NewNumber;

	//NewNumber = NewNumber<<2;
	//NewNumber = NewNumber>>1;



	std::cout << NewNumber.Value << std::endl << test << std::endl;
}