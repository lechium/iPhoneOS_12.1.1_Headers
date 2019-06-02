/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PUPhotoEditImageValues : NSObject {

	BOOL _complete;
	NSDictionary* _smartToneStatistics;
	NSDictionary* _smartColorStatistics;
	double _smartToneAutoSuggestion;
	double _smartColorAutoSuggestion;
	NSDictionary* _autoCropValues;
	NSDictionary* _portraitValues;
	NSDictionary* _apertureValues;

}

@property (copy) NSDictionary * smartToneStatistics;               //@synthesize smartToneStatistics=_smartToneStatistics - In the implementation block
@property (copy) NSDictionary * smartColorStatistics;              //@synthesize smartColorStatistics=_smartColorStatistics - In the implementation block
@property (assign) double smartToneAutoSuggestion;                 //@synthesize smartToneAutoSuggestion=_smartToneAutoSuggestion - In the implementation block
@property (assign) double smartColorAutoSuggestion;                //@synthesize smartColorAutoSuggestion=_smartColorAutoSuggestion - In the implementation block
@property (copy) NSDictionary * autoCropValues;                    //@synthesize autoCropValues=_autoCropValues - In the implementation block
@property (copy) NSDictionary * portraitValues;                    //@synthesize portraitValues=_portraitValues - In the implementation block
@property (copy) NSDictionary * apertureValues;                    //@synthesize apertureValues=_apertureValues - In the implementation block
@property (getter=isComplete) BOOL complete;                       //@synthesize complete=_complete - In the implementation block
-(NSDictionary *)smartToneStatistics;
-(NSDictionary *)smartColorStatistics;
-(void)setSmartToneStatistics:(NSDictionary *)arg1 ;
-(void)setSmartColorStatistics:(NSDictionary *)arg1 ;
-(double)smartToneAutoSuggestion;
-(void)setSmartToneAutoSuggestion:(double)arg1 ;
-(double)smartColorAutoSuggestion;
-(void)setSmartColorAutoSuggestion:(double)arg1 ;
-(NSDictionary *)autoCropValues;
-(void)setAutoCropValues:(NSDictionary *)arg1 ;
-(NSDictionary *)portraitValues;
-(void)setPortraitValues:(NSDictionary *)arg1 ;
-(NSDictionary *)apertureValues;
-(void)setApertureValues:(NSDictionary *)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)isComplete;
@end
