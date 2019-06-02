/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUMenuBarConfigurationType.h>

@class NSArray, NSString;

@interface TUMenuBarConfiguration : NSObject <TUMenuBarConfigurationType> {

	NSArray* _menus;
	unsigned long long _supportedFeatures;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * menus;                                   //@synthesize menus=_menus - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedFeatures;              //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
-(unsigned long long)supportedFeatures;
-(NSArray *)menus;
-(id)initWithMenus:(id)arg1 supportedFeatures:(unsigned long long)arg2 ;
@end

