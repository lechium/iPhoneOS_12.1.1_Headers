/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCRelativePath;

@interface BRCDirectoryBreadthEnumerator : NSObject {

	SCD_Struct_BR20* _dir;
	BRCRelativePath* _parentPath;

}
-(id)initWithParentPath:(id)arg1 error:(int*)arg2 ;
-(id)nextObjectWithIsDir:(BOOL*)arg1 error:(int*)arg2 ;
-(void)dealloc;
@end

