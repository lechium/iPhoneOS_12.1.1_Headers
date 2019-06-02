/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIResponder;

@interface _UIResponder_Override : NSObject {

	UIResponder* _owner;
	UIResponder* _target;
	long long _types;

}

@property (nonatomic,__weak,readonly) UIResponder * owner;               //@synthesize owner=_owner - In the implementation block
@property (nonatomic,__weak,readonly) UIResponder * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) long long types;                          //@synthesize types=_types - In the implementation block
+(id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3 ;
-(void)dealloc;
-(id)description;
-(UIResponder *)target;
-(UIResponder *)owner;
-(long long)types;
@end

