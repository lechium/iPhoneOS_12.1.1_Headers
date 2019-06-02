/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOMapItemParentVenue : NSObject {

	unsigned long long _businessID;
	int _featureType;

}

@property (nonatomic,readonly) unsigned long long businessID;              //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) int featureType;                            //@synthesize featureType=_featureType - In the implementation block
-(int)featureType;
-(unsigned long long)businessID;
-(id)initWithBusinessID:(unsigned long long)arg1 featureType:(int)arg2 ;
-(id)initWithLocatedInsideInfo:(id)arg1 ;
@end
