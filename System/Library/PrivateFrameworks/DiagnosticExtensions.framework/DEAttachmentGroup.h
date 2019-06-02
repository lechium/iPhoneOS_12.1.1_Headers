/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensions/DEAttachmentItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSArray;

@interface DEAttachmentGroup : DEAttachmentItem <NSSecureCoding> {

	NSURL* _rootURL;
	NSArray* _attachmentItems;

}

@property (nonatomic,retain) NSURL * rootURL;                        //@synthesize rootURL=_rootURL - In the implementation block
@property (nonatomic,retain) NSArray * attachmentItems;              //@synthesize attachmentItems=_attachmentItems - In the implementation block
+(id)createWithName:(id)arg1 rootURL:(id)arg2 attachmentItems:(id)arg3 ;
+(id)createWithName:(id)arg1 rootURL:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)attachWithDestinationDir:(id)arg1 ;
-(NSURL *)rootURL;
-(void)setRootURL:(NSURL *)arg1 ;
-(void)setAttachmentItems:(NSArray *)arg1 ;
-(NSArray *)attachmentItems;
-(id)attachToDestinationDir:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

