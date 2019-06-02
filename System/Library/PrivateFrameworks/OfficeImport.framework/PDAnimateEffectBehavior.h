/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {

	BOOL mHasTransition;
	int mTransition;
	NSMutableDictionary* mPropertyMap;

}

@property (nonatomic,retain) NSMutableDictionary * propertyMap; 
-(NSMutableDictionary *)propertyMap;
-(BOOL)hasTransition;
-(BOOL)hasProperties;
-(void)setPropertyMap:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(int)transition;
-(void)setTransition:(int)arg1 ;
@end
