/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewParts.h>

@interface QLBasePreviewParts : QLPreviewParts
+(BOOL)canConvertDocumentType:(id)arg1 ;
+(/*function pointer*/void*)dataCallbackForUTI:(id)arg1 andSize:(unsigned long long)arg2 ;
+(BOOL)isBundleURL:(id)arg1 ;
+(/*function pointer*/void*)urlCallbackForUTI:(id)arg1 ;
-(void)computePreview;
@end

