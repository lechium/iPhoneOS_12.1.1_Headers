/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDPrivacyPolicy : NSObject {

	BOOL canPersistOnStorage;
	double temporalPrecision;

}

@property (nonatomic,readonly) BOOL canPersistOnStorage; 
@property (nonatomic,readonly) double temporalPrecision; 
+(id)sharedPrivacyPolicy;
-(double)temporalPrecision;
-(BOOL)canPersistOnStorage;
-(id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(BOOL)arg2 ;
-(id)init;
-(id)description;
@end

