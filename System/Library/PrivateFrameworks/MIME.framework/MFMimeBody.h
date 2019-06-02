/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>
#import <libobjc.A.dylib/ECMimePart.h>

@class NSString, MFMimePart;

@interface MFMimeBody : MFMessageBody <ECMimePart> {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;
	long long _encryptedDescendantState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * mimeSubtype; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,readonly) unsigned long long totalTextSize; 
@property (nonatomic,retain) MFMimePart * topLevelPart; 
@property (nonatomic,readonly) BOOL hasEncryptedDescendantPart; 
+(id)copyNewMimeBoundary;
+(id)versionString;
-(BOOL)isRich;
-(NSString *)mimeSubtype;
-(long long)preferredAlternative;
-(BOOL)hasEncryptedDescendantPart;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)partWithNumber:(id)arg1 ;
-(id)textHtmlPart;
-(void)setTopLevelPart:(MFMimePart *)arg1 ;
-(long long)numberOfAlternatives;
-(MFMimePart *)topLevelPart;
-(void)setPreferredAlternative:(long long)arg1 ;
-(unsigned long long)totalTextSize;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(BOOL)isHTML;
-(id)attachmentURLs;
-(id)preferredBodyPart;
-(id)init;
-(void)dealloc;
-(id)attachments;
-(NSString *)mimeType;
@end

