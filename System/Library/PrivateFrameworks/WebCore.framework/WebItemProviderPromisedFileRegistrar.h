/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebItemProviderRegistrar.h>

@class NSString, NSData;

@interface WebItemProviderPromisedFileRegistrar : NSObject <WebItemProviderRegistrar> {

	RetainPtr<NSString>* _typeIdentifier;
	BlockPtr<void (void ()(NSURL *, NSError *))>* _callback;

}

@property (nonatomic,readonly) NSString * typeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
-(void)registerItemProvider:(id)arg1 ;
-(id)initWithType:(id)arg1 callback:(/*^block*/id)arg2 ;
-(NSString *)description;
-(NSString *)typeIdentifier;
@end

