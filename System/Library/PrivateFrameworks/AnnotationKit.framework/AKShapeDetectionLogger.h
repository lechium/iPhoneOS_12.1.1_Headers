/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AKShapeDetectionLogger : NSObject
+(void)initialize;
+(id)sharedInstance;
-(void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2 ;
-(void)openFinderWindowToLogs;
-(BOOL)_loggingIsEnabled;
-(id)_newLogPathWithShapeName:(id)arg1 ;
-(id)_logsPath;
-(id)_fileName:(id)arg1 ;
@end

