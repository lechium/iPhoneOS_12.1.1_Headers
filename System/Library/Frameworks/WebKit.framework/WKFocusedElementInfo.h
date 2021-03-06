/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKFocusedElementInfo.h>

@class NSString;

@interface WKFocusedElementInfo : NSObject <_WKFocusedElementInfo> {

	long long _type;
	RetainPtr<NSString>* _value;
	BOOL _isUserInitiated;
	RetainPtr<NSObject<NSSecureCoding> >* _userObject;
	RetainPtr<NSString>* _placeholder;
	RetainPtr<NSString>* _label;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * value; 
@property (nonatomic,copy,readonly) NSString * placeholder; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (getter=isUserInitiated,nonatomic,readonly) BOOL userInitiated; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
-(id)initWithAssistedNodeInformation:(const AssistedNodeInformation*)arg1 isUserInitiated:(BOOL)arg2 userObject:(id)arg3 ;
-(NSObject*<NSSecureCoding>)userObject;
-(BOOL)isUserInitiated;
-(long long)type;
-(NSString *)value;
-(NSString *)placeholder;
-(NSString *)label;
@end

