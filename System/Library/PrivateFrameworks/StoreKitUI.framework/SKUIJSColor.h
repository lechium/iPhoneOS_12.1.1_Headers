/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSColor.h>

@protocol SKUIJSColor <JSExport>
@property (nonatomic,readonly) unsigned long long red; 
@property (nonatomic,readonly) unsigned long long green; 
@property (nonatomic,readonly) unsigned long long blue; 
@property (nonatomic,readonly) double alpha; 
@required
-(double)alpha;
-(unsigned long long)red;
-(unsigned long long)green;
-(unsigned long long)blue;

@end


@interface SKUIJSColor : IKJSObject <SKUIJSColor> {

	unsigned long long _red;
	unsigned long long _green;
	unsigned long long _blue;
	double _alpha;

}

@property (nonatomic,readonly) unsigned long long red;                //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) unsigned long long green;              //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) unsigned long long blue;               //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;                          //@synthesize alpha=_alpha - In the implementation block
-(id)initWithAppContext:(id)arg1 color:(id)arg2 ;
-(id)description;
-(double)alpha;
-(unsigned long long)red;
-(unsigned long long)green;
-(unsigned long long)blue;
@end

