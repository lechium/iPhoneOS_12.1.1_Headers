/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMTimelapseMovieWriterProtocol <NSObject>
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@required
-(void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(CGAffineTransform)arg6 framesPerSecond:(long long)arg7 preferHEVC:(BOOL)arg8 completionHandler:(/*^block*/id)arg9;
-(BOOL)isSuspended;
-(void)setSuspended:(BOOL)arg1;

@end
