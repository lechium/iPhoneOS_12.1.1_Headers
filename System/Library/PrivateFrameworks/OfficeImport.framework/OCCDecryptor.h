/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OITSUTemporaryDirectory, NSString;

@interface OCCDecryptor : NSObject {

	OITSUTemporaryDirectory* mTempDirectory;
	NSString* mOutputFilename;
	NSString* mBaseStringForOutputFilename;
	OCCStreamer* mStreamer;

}

@property (nonatomic,readonly) NSString * outputFilename; 
+(id)allocTempFileWithBase:(id)arg1 outFilename:(id*)arg2 tempDirectory:(id*)arg3 ;
+(id)agileDescriptorNamespace;
+(id)agilePasswordKeyEncryptorNamespace;
-(BOOL)isReadProtectedUsingDefaultPassphrase;
-(BOOL)verifyPassphrase:(id)arg1 ;
-(void)deleteOutputFile;
-(BOOL)decryptIntoOutputFile;
-(BOOL)decrypt;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
-(NSString *)outputFilename;
-(void)dealloc;
@end

