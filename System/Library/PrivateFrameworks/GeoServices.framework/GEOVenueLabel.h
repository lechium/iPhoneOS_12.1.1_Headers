/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOVenueLabel.h>
@class NSString;


@protocol GEOVenueLabel
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * detail; 
@required
-(NSString *)shortName;
-(NSString *)name;
-(NSString *)detail;

@end


@class NSString;

@interface GEOVenueLabel : NSObject <GEOVenueLabel> {

	NSString* _name;
	NSString* _shortName;
	NSString* _detail;

}

@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shortName;              //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,readonly) NSString * detail;                 //@synthesize detail=_detail - In the implementation block
-(id)initWithName:(id)arg1 shortName:(id)arg2 detail:(id)arg3 ;
-(NSString *)shortName;
-(NSString *)name;
-(id)initWithLabel:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)detail;
@end
