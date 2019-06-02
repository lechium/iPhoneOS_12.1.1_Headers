/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface AVTCoreModelRowOptions : NSObject {

	BOOL _separator;
	NSString* _framingMode;
	NSArray* _presetOverrides;

}

@property (nonatomic,copy,readonly) NSString * framingMode;                 //@synthesize framingMode=_framingMode - In the implementation block
@property (nonatomic,readonly) BOOL separator;                              //@synthesize separator=_separator - In the implementation block
@property (nonatomic,copy,readonly) NSArray * presetOverrides;              //@synthesize presetOverrides=_presetOverrides - In the implementation block
-(id)initWithFramingMode:(id)arg1 separatorFlag:(BOOL)arg2 presetOverrides:(id)arg3 ;
-(NSString *)framingMode;
-(NSArray *)presetOverrides;
-(BOOL)separator;
@end

