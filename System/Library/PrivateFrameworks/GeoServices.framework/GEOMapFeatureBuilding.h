/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOMapFeatureBuilding : NSObject {

	SCD_Struct_GE108* _feature;
	NSArray* _sections;

}

@property (nonatomic,readonly) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
-(id)initWithFeature:(SCD_Struct_GE108*)arg1 ;
-(void)dealloc;
-(NSArray *)sections;
@end

