#pragma once

#include <string>

namespace osmp
{
	enum class TagKey {
		NONE,
		AERIALWAY, AEROWAY, AMENITY, BARRIER, BOUNDARY,
		BUILDING, CRAFT, EMERGENCY, GEOLOGICAL, HEALTHCARE,
		HIGHWAY, HISTORIC, LANDUSE, LEISURE, MANMADE, MILITARY,
		NATURAL, OFFICE, PLACE, POWER, PUBLIC_TRANSPORT, 
		RAILWAY, ROUTE, SHOP, SPORT, TELECOM, TOURISM, WATER, WATERWAY
	};

	/*
	enum class TagValue {
		NONE,

		BUILDING_APARTMENTS, BUILDING_BUNGALOW, BUILDING_CABIN, BUILDING_DETACHED, BUILDING_DORMITORY, BUILDING_FARM, BUILDING_GER, 
		BUILDING_HOTEL, BUILDING_HOUSE, BUILDING_HOUSEBOAT, BUILDING_RESIDENTIAL, BUILDING_SEMIDETACHED_HOUSE, BUILDING_STATIC_CARAVAN, 
		BUILDING_TERRACE, BUILDING_COMMERCIAL, BUILDING_INDUSTRIAL, BUILDING_KIOSK, BUILDING_OFFICE, BUILDING_RETAIL, BUILDING_SUPERMARKET, 
		BUILDING_WAREHOUSE, BUILDING_CATHEDRAL, BUILDING_CHAPEL, BUILDING_CHURCH, BUILDING_MONASTERY, BUILDING_MOSQUE, BUILDING_PRESBYTERY, 
		BUILDING_RELIGIOUS, BUILDING_SHRINE, BUILDING_SYNAGOGUE, BUILDING_TEMPLE, BUILDING_BAKEHOUSE, BUILDING_CIVIC, BUILDING_FIRE_STATION, 
		BUILDING_GOVERNMENT, BUILDING_HOSPITAL, BUILDING_PUBLIC, BUILDING_TOILETS, BUILDING_TRAIN_STATION, BUILDING_TRANSPORTATION, 
		BUILDING_KINDERGARTEN, BUILDING_SCHOOL, BUILDING_UNIVERSITY

	};
	*/

	typedef struct sTag
	{
		std::string k;	// TODO: Should/could be an enum
		std::string v;
	} Tag;

	typedef std::vector<Tag> TagList;
}
