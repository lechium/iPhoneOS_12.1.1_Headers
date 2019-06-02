/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUDynamicScrollingOptions : NSObject {

	long long _viewSizeSubclass;
	SCD_Struct_HU8 _textScaleSetting;

}

@property (nonatomic,readonly) long long viewSizeSubclass;                 //@synthesize viewSizeSubclass=_viewSizeSubclass - In the implementation block
@property (assign,nonatomic) SCD_Struct_HU8 textScaleSetting;              //@synthesize textScaleSetting=_textScaleSetting - In the implementation block
+(id)_defaultOptionsWithStatusSectionForViewSizeSubclass:(long long)arg1 ;
+(id)_defaultOptionsWithoutStatusSectionForViewSizeSubclass:(long long)arg1 ;
+(id)defaultOptionsForViewSizeSubclass:(long long)arg1 showsStatusSection:(BOOL)arg2 ;
-(long long)viewSizeSubclass;
-(id)initWithViewSizeSubclass:(long long)arg1 ;
-(void)setTextScaleSetting:(SCD_Struct_HU8)arg1 ;
-(SCD_Struct_HU8)textScaleSetting;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
