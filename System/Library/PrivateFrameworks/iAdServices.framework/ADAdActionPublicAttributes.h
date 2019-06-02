/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ADMRAIDAction, NSNumber, NSArray;

@interface ADAdActionPublicAttributes : NSObject <NSSecureCoding> {

	BOOL _actionLeavesApplication;
	BOOL _actionViewControllerHidesStatusBar;
	int _action;
	int _transitionType;
	unsigned long long _actionViewControllerPresentationOrientationMask;
	NSString* _actionURLString;
	ADMRAIDAction* _MRAIDAction;
	NSNumber* _adamIdentifier;
	NSArray* _iTunesMetadata;
	NSString* _calendarEventIdentifier;

}

@property (assign,nonatomic) BOOL actionLeavesApplication;                                                    //@synthesize actionLeavesApplication=_actionLeavesApplication - In the implementation block
@property (assign,nonatomic) int action;                                                                      //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long actionViewControllerPresentationOrientationMask;              //@synthesize actionViewControllerPresentationOrientationMask=_actionViewControllerPresentationOrientationMask - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerHidesStatusBar;                                         //@synthesize actionViewControllerHidesStatusBar=_actionViewControllerHidesStatusBar - In the implementation block
@property (assign,nonatomic) int transitionType;                                                              //@synthesize transitionType=_transitionType - In the implementation block
@property (nonatomic,copy) NSString * actionURLString;                                                        //@synthesize actionURLString=_actionURLString - In the implementation block
@property (nonatomic,copy) ADMRAIDAction * MRAIDAction;                                                       //@synthesize MRAIDAction=_MRAIDAction - In the implementation block
@property (nonatomic,copy) NSNumber * adamIdentifier;                                                         //@synthesize adamIdentifier=_adamIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * iTunesMetadata;                                                          //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
@property (nonatomic,copy) NSString * calendarEventIdentifier;                                                //@synthesize calendarEventIdentifier=_calendarEventIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setITunesMetadata:(NSArray *)arg1 ;
-(int)transitionType;
-(NSString *)actionURLString;
-(void)setActionURLString:(NSString *)arg1 ;
-(void)setActionViewControllerPresentationOrientationMask:(unsigned long long)arg1 ;
-(void)setActionViewControllerHidesStatusBar:(BOOL)arg1 ;
-(void)setAdamIdentifier:(NSNumber *)arg1 ;
-(BOOL)actionLeavesApplication;
-(void)setMRAIDAction:(ADMRAIDAction *)arg1 ;
-(ADMRAIDAction *)MRAIDAction;
-(void)setActionLeavesApplication:(BOOL)arg1 ;
-(unsigned long long)actionViewControllerPresentationOrientationMask;
-(BOOL)actionViewControllerHidesStatusBar;
-(NSString *)calendarEventIdentifier;
-(void)setCalendarEventIdentifier:(NSString *)arg1 ;
-(NSNumber *)adamIdentifier;
-(NSArray *)iTunesMetadata;
-(void)setTransitionType:(int)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)_actionDescription;
@end

