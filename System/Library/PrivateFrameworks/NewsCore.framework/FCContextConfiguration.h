/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying> {

	BOOL _isProductionContentEnvironment;
	BOOL _isProductionPrivateDataEnvironment;
	long long _environment;
	NSString* _contentContainerIdentifier;
	NSString* _contentContainerCombinationIdentifier;
	NSString* _privateDataContainerIdentifier;
	NSString* _privateDataSecureContainerIdentifier;
	NSString* _privateDataContainerCombinationIdentifier;

}

@property (nonatomic,readonly) BOOL isProductionContentEnvironment;                                    //@synthesize isProductionContentEnvironment=_isProductionContentEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL isProductionPrivateDataEnvironment;                                //@synthesize isProductionPrivateDataEnvironment=_isProductionPrivateDataEnvironment - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataContainerIdentifier;                         //@synthesize privateDataContainerIdentifier=_privateDataContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataSecureContainerIdentifier;                   //@synthesize privateDataSecureContainerIdentifier=_privateDataSecureContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataContainerCombinationIdentifier;              //@synthesize privateDataContainerCombinationIdentifier=_privateDataContainerCombinationIdentifier - In the implementation block
@property (nonatomic,readonly) long long environment;                                                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentContainerIdentifier;                             //@synthesize contentContainerIdentifier=_contentContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentContainerCombinationIdentifier;                  //@synthesize contentContainerCombinationIdentifier=_contentContainerCombinationIdentifier - In the implementation block
+(id)defaultConfiguration;
-(NSString *)contentContainerCombinationIdentifier;
-(NSString *)contentContainerIdentifier;
-(NSString *)privateDataContainerIdentifier;
-(NSString *)privateDataSecureContainerIdentifier;
-(BOOL)isProductionPrivateDataEnvironment;
-(NSString *)privateDataContainerCombinationIdentifier;
-(BOOL)isProductionContentEnvironment;
-(id)initWithProductionContentEnvironment:(BOOL)arg1 productionPrivateDataEnvironment:(BOOL)arg2 contentContainerIdentifier:(id)arg3 privateDataContainerIdentifier:(id)arg4 privateDataSecureContainerIdentifier:(id)arg5 storeFrontID:(id)arg6 environment:(long long)arg7 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEnvironment:(long long)arg1 ;
-(long long)environment;
@end

