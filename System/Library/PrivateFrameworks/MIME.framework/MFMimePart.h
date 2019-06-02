/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MIME/MIME-Structs.h>
@class NSString, NSMutableDictionary, MFWeakReferenceHolder, NSURL, MFPartialNetworkDataConsumer, NSData;

@interface MFMimePart : NSObject {

	NSString* _type;
	NSString* _subtype;
	NSMutableDictionary* _bodyParameters;
	NSString* _contentTransferEncoding;
	NSMutableDictionary* _otherIvars;
	NSRange _range;
	MFWeakReferenceHolder* _parent;
	MFWeakReferenceHolder* _body;
	MFMimePart* _nextPart;
	NSURL* _partURL;
	NSURL* _parentPartURL;
	MFPartialNetworkDataConsumer* _partialDataConsumer;
	NSData* _fullData;
	MFWeakReferenceHolder* _decodedData;

}
+(BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4 ;
+(BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 ;
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
+(void)initialize;
-(id)bodyData;
-(id)languages;
-(void)setLanguages:(id)arg1 ;
-(unsigned)numberOfAttachments;
-(BOOL)hasContents;
-(void)download;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(BOOL)isRich;
-(BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)arg1 ;
-(id)chosenAlternativePart;
-(void)decodeIfNecessary;
-(id)startPart;
-(void)_clearNextAndSibling;
-(void)_clearParent;
-(id)_partThatIsAttachment;
-(BOOL)shouldConsiderInlineOverridingExchangeServer;
-(BOOL)hasContentType:(id)arg1 subtype:(id)arg2 ;
-(id)subpartAtIndex:(long long)arg1 ;
-(id)_fullMimeTypeEvenInsideAppleDouble;
-(void)_ensureBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 decoded:(id*)arg5 ;
-(id)bodyDataForcingDownload:(BOOL)arg1 ;
-(id)contentsForTextSystemForcingDownload:(BOOL)arg1 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(BOOL)hasValidMultipartSignedContentType;
-(id)preservedHeaderValueForKey:(id)arg1 ;
-(void)_setRFC822DecodedMessageBody:(id)arg1 ;
-(void)clearCachedDescryptedMessageBody;
-(BOOL)_hasCompleteBodyDataToOffset:(unsigned long long)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 ;
-(BOOL)parseMimeBody;
-(void)_contents:(id*)arg1 toOffset:(unsigned long long)arg2 resultOffset:(unsigned long long*)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(BOOL*)arg6 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)decodeApplicationZip;
-(id)decodeApplicationOctet_stream;
-(id)decodeMultipartRelated;
-(id)decodeMultipartAlternative;
-(id)decodeMultipart;
-(void)setBodyParameter:(id)arg1 forKey:(id)arg2 ;
-(void)addSubpart:(id)arg1 ;
-(void)setDispositionParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setContentTransferEncoding:(id)arg1 ;
-(id)contentTransferEncoding;
-(id)parentPart;
-(id)firstChildPart;
-(id)nextSiblingPart;
-(BOOL)isAttachment;
-(id)decodedDataForData:(id)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(unsigned)textEncoding;
-(id)attachmentFilename;
-(void)configureFileWrapper:(id)arg1 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(BOOL)_shouldContinueDecodingProcess;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)decodeText;
-(BOOL)isReadableText;
-(id)bodyParameterKeys;
-(id)dispositionParameterKeys;
-(id)dispositionParameterForKey:(id)arg1 ;
-(void)setMimeBody:(id)arg1 ;
-(id)contentsForTextSystem;
-(BOOL)usesKnownSignatureProtocol;
-(id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2 ;
-(void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3 ;
-(id)textHtmlPart;
-(id)signedData;
-(void)setContentDescription:(id)arg1 ;
-(BOOL)parseIMAPPropertyList:(id)arg1 ;
-(void)getNumberOfAttachments:(unsigned*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3 ;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(long long)numberOfAlternatives;
-(id)alternativeAtIndex:(long long)arg1 ;
-(unsigned long long)totalTextSize;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(id)rfc822DecodedMessageBody;
-(BOOL)isHTML;
-(id)disposition;
-(id)partURL;
-(id)attachmentURLs;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 ;
-(id)mimeBody;
-(id)bodyParameterForKey:(id)arg1 ;
-(unsigned)approximateRawSize;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)partNumber;
-(void)setContentLocation:(id)arg1 ;
-(id)subparts;
-(void)setSubparts:(id)arg1 ;
-(id)contentLocation;
-(id)contentDescription;
-(void)setDisposition:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)attachments;
-(id)description;
-(id)type;
-(void)setType:(id)arg1 ;
-(BOOL)isGenerated;
-(void)setIsGenerated:(BOOL)arg1 ;
-(id)subtype;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)fileWrapper;
-(void)setSubtype:(id)arg1 ;
@end

