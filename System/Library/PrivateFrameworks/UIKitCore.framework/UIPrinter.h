/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface UIPrinter : NSObject {

	id _printerInfo;
	NSURL* URL;

}

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) NSString * displayLocation; 
@property (readonly) long long supportedJobTypes; 
@property (copy,readonly) NSString * makeAndModel; 
@property (readonly) BOOL supportsColor; 
@property (readonly) BOOL supportsDuplex; 
+(id)printerWithURL:(id)arg1 ;
-(id)init;
-(NSURL *)URL;
-(NSString *)displayName;
-(id)_initWithPrinter:(id)arg1 ;
-(id)_internalPrinter;
-(void)contactPrinter:(/*^block*/id)arg1 ;
-(id)_initWithURL:(id)arg1 ;
-(NSString *)makeAndModel;
-(NSString *)displayLocation;
-(long long)supportedJobTypes;
-(BOOL)supportsColor;
-(BOOL)supportsDuplex;
@end

