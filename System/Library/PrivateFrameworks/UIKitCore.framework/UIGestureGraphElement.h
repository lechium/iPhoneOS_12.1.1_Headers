/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface UIGestureGraphElement : NSObject {

	NSMutableDictionary* _properties;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)description;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(void)removeAllProperties;
@end

