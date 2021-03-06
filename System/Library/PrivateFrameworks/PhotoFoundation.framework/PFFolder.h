/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFFile.h>

@class NSMutableArray;

@interface PFFolder : PFFile {

	BOOL _isLeaf;
	NSMutableArray* _files;
	NSMutableArray* _folders;

}

@property (nonatomic,retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
@property (assign,nonatomic) BOOL isLeaf;                           //@synthesize isLeaf=_isLeaf - In the implementation block
-(void)addFile:(id)arg1 ;
-(NSMutableArray *)files;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(void)addFolder:(id)arg1 ;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)addFiles:(id)arg1 ;
-(BOOL)isLeaf;
-(NSMutableArray *)folders;
-(void)addFolders:(id)arg1 ;
-(void)setIsLeaf:(BOOL)arg1 ;
-(id)init;
@end

