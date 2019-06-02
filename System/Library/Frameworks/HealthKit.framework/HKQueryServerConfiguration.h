/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKObjectType, _HKFilter;

@interface HKQueryServerConfiguration : HKTaskConfiguration {

	BOOL _shouldDeactivateAfterInitialResults;
	BOOL _shouldSuppressDataCollection;
	HKObjectType* _objectType;
	_HKFilter* _filter;

}

@property (nonatomic,retain) HKObjectType * objectType;                             //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                                    //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL shouldDeactivateAfterInitialResults;              //@synthesize shouldDeactivateAfterInitialResults=_shouldDeactivateAfterInitialResults - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDataCollection;                     //@synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setShouldDeactivateAfterInitialResults:(BOOL)arg1 ;
-(void)setShouldSuppressDataCollection:(BOOL)arg1 ;
-(HKObjectType *)objectType;
-(void)setObjectType:(HKObjectType *)arg1 ;
-(BOOL)shouldDeactivateAfterInitialResults;
-(BOOL)shouldSuppressDataCollection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_HKFilter *)filter;
-(void)setFilter:(_HKFilter *)arg1 ;
@end

