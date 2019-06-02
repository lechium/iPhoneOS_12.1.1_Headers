/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FPSandboxingURLWrapper, NSString, NSURL, FPItem;

@interface DOCItem : NSObject <NSSecureCoding> {

	FPSandboxingURLWrapper* _wrapper;
	BOOL _needsToBeImported;
	NSString* _contentType;
	NSURL* _fileURL;
	NSString* _bookmarkableString;
	FPItem* _fileProviderItem;

}

@property (nonatomic,copy) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (retain) NSString * bookmarkableString;               //@synthesize bookmarkableString=_bookmarkableString - In the implementation block
@property (retain) FPItem * fileProviderItem;                   //@synthesize fileProviderItem=_fileProviderItem - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
+(BOOL)isAnyItemAFault:(id)arg1 ;
+(id)documentsURLsForItems:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)prepareForMode:(unsigned long long)arg1 usingBookmark:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(FPItem *)fileProviderItem;
-(void)setBookmarkableString:(NSString *)arg1 ;
-(void)setFileProviderItem:(FPItem *)arg1 ;
-(BOOL)needsToBeImported;
-(void)copyURLToInbox:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNeedsToBeImported:(BOOL)arg1 ;
-(id)initWithBookmarkableString:(id)arg1 fileProviderItem:(id)arg2 ;
-(id)initWithURL:(id)arg1 fileProviderItem:(id)arg2 ;
-(id)coordinatedFileURL;
-(id)fileURLForUploading;
-(NSString *)bookmarkableString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)fileURL;
@end

