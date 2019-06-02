/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QLCacheVersionedFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLCacheBasicFileIdentifier;

@interface QLCacheBasicVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (readonly) QLCacheBasicFileIdentifier * fileIdentifier; 
-(id)initWithFileIdentifier:(id)arg1 version:(id)arg2 ;
-(id)initWithThumbnailRequest:(id)arg1 ;
@end

