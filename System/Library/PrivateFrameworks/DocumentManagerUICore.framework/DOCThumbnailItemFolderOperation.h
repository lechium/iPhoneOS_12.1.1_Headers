/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <DocumentManagerUICore/DOCThumbnailBaseOperation.h>

@interface DOCThumbnailItemFolderOperation : DOCThumbnailBaseOperation {

	unsigned long long _folderType;

}

@property (assign,nonatomic) unsigned long long folderType;              //@synthesize folderType=_folderType - In the implementation block
+(id)synchronousFolderIconForItemFolderType:(unsigned long long)arg1 size:(CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 ;
-(unsigned long long)folderType;
-(void)setFolderType:(unsigned long long)arg1 ;
-(BOOL)generateThumbnail:(id*)arg1 representativeIcon:(BOOL*)arg2 ;
-(id)initWithItemFolderType:(unsigned long long)arg1 size:(CGSize)arg2 scale:(double)arg3 delegate:(id)arg4 style:(unsigned long long)arg5 ;
@end

