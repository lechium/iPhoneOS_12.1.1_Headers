/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSValue;

@interface UIDebuggingInformationValue : NSObject {

	NSString* _key;
	long long _type;
	NSValue* _defaultValue;
	NSValue* _minimumValue;
	NSValue* _maximumValue;

}

@property (nonatomic,copy) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSValue * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSValue * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSValue * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)key;
-(void)setMinimumValue:(NSValue *)arg1 ;
-(void)setMaximumValue:(NSValue *)arg1 ;
-(NSValue *)minimumValue;
-(NSValue *)maximumValue;
-(void)setKey:(NSString *)arg1 ;
-(NSValue *)defaultValue;
-(void)setDefaultValue:(NSValue *)arg1 ;
@end

