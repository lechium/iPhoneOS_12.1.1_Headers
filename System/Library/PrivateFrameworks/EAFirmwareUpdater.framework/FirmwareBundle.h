/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface FirmwareBundle : NSObject {

	NSString* _bundleDescription;
	unsigned _productIDCode;
	unsigned _firmwareImageBaseAddress;
	unsigned _firmwareImageSize;
	NSData* _firmwareImage;
	NSData* _hash;
	NSData* _certificate;
	NSData* _signature;

}

@property (readonly) NSData * hash;                                  //@synthesize hash=_hash - In the implementation block
@property (readonly) NSData * firmwareImage;                         //@synthesize firmwareImage=_firmwareImage - In the implementation block
@property (readonly) NSData * signature;                             //@synthesize signature=_signature - In the implementation block
@property (readonly) NSData * certificate;                           //@synthesize certificate=_certificate - In the implementation block
@property (readonly) unsigned productIDCode;                         //@synthesize productIDCode=_productIDCode - In the implementation block
@property (readonly) unsigned firmwareImageBaseAddress;              //@synthesize firmwareImageBaseAddress=_firmwareImageBaseAddress - In the implementation block
@property (readonly) unsigned firmwareImageSize;                     //@synthesize firmwareImageSize=_firmwareImageSize - In the implementation block
+(id)defaultBundlePath;
-(NSData *)signature;
-(NSData *)certificate;
-(id)initWithBundlePath:(id)arg1 ;
-(NSData *)firmwareImage;
-(unsigned)firmwareImageSize;
-(unsigned)productIDCode;
-(unsigned)firmwareImageBaseAddress;
-(void)parseFileName:(id)arg1 intoPath:(id*)arg2 andExtension:(id*)arg3 ;
-(id)parseSRECFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2 ;
-(id)parseMSP430TXTFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2 ;
-(id)parseResourceFileIntoData:(id)arg1 ;
-(void)parseSRECLine:(id)arg1 intoImage:(id)arg2 ;
-(id)initWithData:(id)arg1 hashData:(id)arg2 signatureData:(id)arg3 certData:(id)arg4 ;
-(id)initWithBundleName:(id)arg1 ;
-(void)dealloc;
-(NSData *)hash;
-(id)description;
-(id)initWithBundle:(id)arg1 ;
@end

