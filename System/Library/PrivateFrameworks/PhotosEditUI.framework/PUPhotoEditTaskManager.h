/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PUPhotoEditTaskManager : NSObject {

	NSMutableDictionary* _pendingRequestsByAsset;

}
+(id)sharedManager;
-(void)_requestDidFinish:(id)arg1 ;
-(void)createEditableCopyForReadOnlyPhoto:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)saveEditsForPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)saveEditsForPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)clearEditsForPhoto:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)pendingSaveRequestForPhoto:(id)arg1 ;
-(id)init;
@end
