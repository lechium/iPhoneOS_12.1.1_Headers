/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSString, FPItemID;

@interface FPCreateFolderOperation : FPActionOperation {

	FPItem* _parentItem;
	NSString* _folderFilename;
	FPItemID* _placeholderID;
	/*^block*/id _createFolderCompletionBlock;

}

@property (nonatomic,copy) id createFolderCompletionBlock;              //@synthesize createFolderCompletionBlock=_createFolderCompletionBlock - In the implementation block
-(void)mainWithExtensionProxy:(id)arg1 ;
-(void)presendNotifications;
-(id)createFolderCompletionBlock;
-(void)setCreateFolderCompletionBlock:(id)arg1 ;
-(id)initWithParentItem:(id)arg1 folderName:(id)arg2 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

