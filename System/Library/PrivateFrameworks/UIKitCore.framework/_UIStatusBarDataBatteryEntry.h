/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBatteryEntry : _UIStatusBarDataEntry {

	BOOL _saverModeActive;
	BOOL _prominentlyShowsDetailString;
	long long _capacity;
	long long _state;
	NSString* _detailString;

}

@property (assign,nonatomic) long long capacity;                             //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL saverModeActive;                           //@synthesize saverModeActive=_saverModeActive - In the implementation block
@property (assign,nonatomic) BOOL prominentlyShowsDetailString;              //@synthesize prominentlyShowsDetailString=_prominentlyShowsDetailString - In the implementation block
@property (nonatomic,copy) NSString * detailString;                          //@synthesize detailString=_detailString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)capacity;
-(BOOL)saverModeActive;
-(void)setSaverModeActive:(BOOL)arg1 ;
-(NSString *)detailString;
-(BOOL)prominentlyShowsDetailString;
-(void)setCapacity:(long long)arg1 ;
-(id)_ui_descriptionBuilder;
-(void)setProminentlyShowsDetailString:(BOOL)arg1 ;
-(void)setDetailString:(NSString *)arg1 ;
@end
