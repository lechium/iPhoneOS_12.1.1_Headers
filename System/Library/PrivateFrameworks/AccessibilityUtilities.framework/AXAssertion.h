/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXAssertion : NSObject {

	NSString* _assertionType;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * assertionType;              //@synthesize assertionType=_assertionType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(id)assertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)_notifyServerAssertionWasAcquired;
-(void)_notifyServerAssertionWasRelinquished;
-(BOOL)_hasValidAssertionType;
-(NSString *)assertionType;
-(void)setAssertionType:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
@end

