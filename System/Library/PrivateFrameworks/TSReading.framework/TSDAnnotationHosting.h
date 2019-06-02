/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSKAnnotationAuthor, NSDate, NSString, TSDCommentStorage;


@protocol TSDAnnotationHosting <NSObject,TSKAnnotation>
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) id<TSKModel> model; 
@property (nonatomic,readonly) NSString * changeTrackingString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
@optional
-(TSDCommentStorage *)storage;
-(void)setStorage:(id)arg1;
-(NSString *)changeTrackingString;
-(id)commandForDeletingComment;

@required
-(TSKAnnotationAuthor *)author;
-(void)setAuthor:(id)arg1;
-(void)setModel:(id)arg1;
-(void)commitText:(id)arg1;
-(BOOL)isEqual:(id)arg1;
-(NSDate *)date;
-(id<TSKModel>)model;

@end
