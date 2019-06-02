/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <NanoMailKitServer/NNMKHTMLParser.h>

@class NSLock, NSMutableAttributedString, NSMutableDictionary;

@interface NNMKContentAttributedStringHTMLParser : NNMKHTMLParser {

	NSLock* _lock;
	NSMutableAttributedString* _parsedAttributedString;
	unsigned long long _maxLength;
	double _maxImageWidth;
	BOOL* _partiallyParsed;
	NSMutableDictionary* _imageAtachmentsDataByContentId;

}

@property (nonatomic,retain) NSLock * lock;                                                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * parsedAttributedString;                //@synthesize parsedAttributedString=_parsedAttributedString - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                                      //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) double maxImageWidth;                                              //@synthesize maxImageWidth=_maxImageWidth - In the implementation block
@property (assign,nonatomic) BOOL* partiallyParsed;                                             //@synthesize partiallyParsed=_partiallyParsed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageAtachmentsDataByContentId;              //@synthesize imageAtachmentsDataByContentId=_imageAtachmentsDataByContentId - In the implementation block
+(id)_scaleAndPrepareImageForClient:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3 ;
+(CGSize)_scaledDownSize:(CGSize)arg1 maxWidth:(double)arg2 ;
+(id)imageAttachmentAttributedStringWithContentId:(id)arg1 imageSize:(CGSize)arg2 mergingAttributes:(id)arg3 ;
+(id)attachmentAttributedStringWithContentId:(id)arg1 mergingAttributes:(id)arg2 ;
+(id)adjustedImage:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3 ;
+(id)trimAttributedString:(id)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(BOOL)isElementBlacklisted:(id)arg1 attributeQueryBlock:(/*^block*/id)arg2 ;
-(BOOL)isErrorTypeBlacklisted:(char*)arg1 ;
-(BOOL)isElementIgnorable:(id)arg1 ;
-(void)appendString:(id)arg1 stringAttributes:(id)arg2 ;
-(void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4 ;
-(id)_parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(BOOL*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsForValidation:(id)arg7 urlsFound:(id*)arg8 ;
-(BOOL)_validateURLsAndHTMLTagsInParsedString:(id)arg1 urlsFound:(id*)arg2 ;
-(void)_addDataDetectionAttributes:(id)arg1 ;
-(NSMutableDictionary *)imageAtachmentsDataByContentId;
-(double)maxImageWidth;
-(NSMutableAttributedString *)parsedAttributedString;
-(id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(BOOL*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsFound:(id*)arg7 ;
-(id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(BOOL*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsForValidation:(id)arg7 ;
-(void)setParsedAttributedString:(NSMutableAttributedString *)arg1 ;
-(void)setMaxImageWidth:(double)arg1 ;
-(BOOL*)partiallyParsed;
-(void)setPartiallyParsed:(BOOL*)arg1 ;
-(void)setImageAtachmentsDataByContentId:(NSMutableDictionary *)arg1 ;
-(NSLock *)lock;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
@end

