/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>

@class NSArray;

@interface WFFavoriteLocationResponse : WFResponse {

	NSArray* _favoriteLocations;

}

@property (readonly) NSArray * favoriteLocations;              //@synthesize favoriteLocations=_favoriteLocations - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)favoriteLocations;
-(id)initWithIdentifier:(id)arg1 favorites:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

