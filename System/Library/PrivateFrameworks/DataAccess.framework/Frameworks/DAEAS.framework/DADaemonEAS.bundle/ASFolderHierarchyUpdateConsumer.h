/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASFolderHierarchyUpdateConsumer <NSObject>
@required
-(void)folderHierarchySuccessfullyUpdated:(id)arg1 withNumChangedFolders:(unsigned long long)arg2;
-(void)folderHierarchyFailedToUpdate:(id)arg1 withStatus:(long long)arg2 andError:(id)arg3;

@end

