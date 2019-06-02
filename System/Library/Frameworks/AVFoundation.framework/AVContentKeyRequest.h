/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVContentKeyRequestInternal, NSError, NSData;

@interface AVContentKeyRequest : NSObject {

	AVContentKeyRequestInternal* _contentKeyRequest;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (readonly) id identifier; 
@property (nonatomic,readonly) NSData * initializationData; 
@property (readonly) BOOL canProvidePersistableContentKey; 
+(void)_validateProtocolVersionList:(id)arg1 ;
+(void)_validateHLSEncryptionMethod:(id)arg1 ;
+(int)_prepareCryptor:(OpaqueFigCPECryptorRef)arg1 forRenewal:(BOOL)arg2 andReturnKeyRequestID:(unsigned long long*)arg3 ;
+(id)_mergePreloadingRequestOptions:(id)arg1 withCreateKeyRequestOptions:(id)arg2 ;
-(void)_clearContext;
-(void)_sendDataToCustomURLHandler:(id)arg1 ;
-(OpaqueFigCPECryptorRef)figCryptor;
-(void)_sendResponseInfoToCustomURLHandler;
-(void)_ensureResponseInfoSentToCustomURLHandler;
-(void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1 ;
-(void)_sendFinishLoadingToCustomURLHandler;
-(NSData *)initializationData;
-(int)_extractAndStoreDefualtKeyIDFromInitializationData:(id)arg1 ;
-(id)_keySystem;
-(id)initWithContentKeySession:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 preloadingRequestOptions:(id)arg4 providesPersistableKey:(BOOL)arg5 ;
-(void)_copyAndStoreCryptorUUID;
-(void)_sendDictionaryForURLRequest:(id)arg1 ;
-(id)_getRetryReasonForError:(int)arg1 ;
-(OpaqueFigCPECryptorRef)_setCryptorWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(id)contentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)processContentKeyResponseData:(id)arg1 ;
-(void)_handleKeyResponseError:(id)arg1 ;
-(BOOL)_canRespondByRequestingPersistableContentKeyRequest;
-(BOOL)respondByRequestingPersistableContentKeyRequestAndReturnError:(id*)arg1 ;
-(id)initWithContentKeySession:(id)arg1 customURLProviderContext:(id)arg2 identifier:(id)arg3 initializationData:(id)arg4 providesPersistableKey:(BOOL)arg5 ;
-(id)initWithContentKeySession:(id)arg1 customURLHandler:(OpaqueFigCustomURLHandlerRef)arg2 identifier:(id)arg3 requestInfo:(CFDictionaryRef)arg4 requestID:(unsigned long long)arg5 providesPersistableKey:(BOOL)arg6 ;
-(int)_prepareForKeyRenewal;
-(BOOL)canProvidePersistableContentKey;
-(void)_handleKeyResponseSuccess;
-(void)makeStreamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)processContentKeyResponse:(id)arg1 ;
-(void)processContentKeyResponseError:(id)arg1 ;
-(void)renewExpiringContentKeyResponseData;
-(void)respondByRequestingPersistableContentKeyRequest;
-(void)_setStatus:(long long)arg1 ;
-(void)_setError:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(long long)status;
-(NSError *)error;
@end

