/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _WKFocusedElementInfo <NSObject>
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * value; 
@property (nonatomic,copy,readonly) NSString * placeholder; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (getter=isUserInitiated,nonatomic,readonly) BOOL userInitiated; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@required
-(NSObject*<NSSecureCoding>)userObject;
-(BOOL)isUserInitiated;
-(long long)type;
-(NSString *)value;
-(NSString *)placeholder;
-(NSString *)label;

@end
