/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CATProperty : NSObject {

	BOOL _readOnly;
	BOOL _nonAtomic;
	BOOL _weakReference;
	NSString* _name;
	NSString* _instanceVariableName;
	long long _type;
	Class _objectClass;
	long long _association;
	SEL _customGetterSelector;
	SEL _customSetterSelector;

}

@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * instanceVariableName;                   //@synthesize instanceVariableName=_instanceVariableName - In the implementation block
@property (nonatomic,readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) Class objectClass;                                      //@synthesize objectClass=_objectClass - In the implementation block
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly;                        //@synthesize readOnly=_readOnly - In the implementation block
@property (getter=isNonAtomic,nonatomic,readonly) BOOL nonAtomic;                      //@synthesize nonAtomic=_nonAtomic - In the implementation block
@property (nonatomic,readonly) long long association;                                  //@synthesize association=_association - In the implementation block
@property (nonatomic,readonly) SEL customGetterSelector;                               //@synthesize customGetterSelector=_customGetterSelector - In the implementation block
@property (nonatomic,readonly) SEL customSetterSelector;                               //@synthesize customSetterSelector=_customSetterSelector - In the implementation block
@property (getter=isWeakReference,nonatomic,readonly) BOOL weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
+(id)propertiesForClass:(Class)arg1 ;
+(id)propertiesForProtocol:(id)arg1 ;
+(void)initialize;
-(NSString *)instanceVariableName;
-(Class)objectClass;
-(id)initWithName:(const char*)arg1 attributes:(const char*)arg2 ;
-(BOOL)isNonAtomic;
-(long long)association;
-(SEL)customGetterSelector;
-(SEL)customSetterSelector;
-(BOOL)isWeakReference;
-(BOOL)isReadOnly;
-(id)init;
-(NSString *)name;
-(long long)type;
@end

