class ColorRange
{
public:
	ColorRange(void)
	{
	}
	virtual ~ColorRange(void) { }

	friend class opros::archive::access;

	template<class Archive>
    void serialize(Archive & ar, const unsigned int)
    {
        ar & name & min1 & max1 & min2 & max2 & min3 & max3;
    }
    
	ColorRange operator=(const ColorRange &colorRange)
	{
		this->name = colorRange.name;
		this->min1 = colorRange.min1;
		this->max1 = colorRange.max1;
		this->min2 = colorRange.min2;
		this->max2 = colorRange.max2;
		this->min3 = colorRange.min3;
		this->max3 = colorRange.max3;

		return *this;
	}

	std::string name;
	unsigned char	min1;
	unsigned char	max1;
	unsigned char	min2;
	unsigned char	max2;
	unsigned char	min3;
	unsigned char	max3;
};

inline std::string typeName(ColorRange *p)	{ return "ColorRange"; }