/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol NSObject;
@class NSString, NSFormatter, NSArray;

@interface HMFAttributeDescription : NSObject <HMFObject> {

	NSString* _name;
	id<NSObject> _value;
	unsigned long long _options;
	NSFormatter* _formatter;

}

@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id<NSObject> value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSFormatter * formatter;                      //@synthesize formatter=_formatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)shortDescription;
-(NSFormatter *)formatter;
-(NSString *)privateDescription;
-(id)initWithName:(id)arg1 value:(id)arg2 options:(unsigned long long)arg3 formatter:(id)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<NSObject>)value;
-(unsigned long long)options;
-(NSString *)shortDescription;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end
