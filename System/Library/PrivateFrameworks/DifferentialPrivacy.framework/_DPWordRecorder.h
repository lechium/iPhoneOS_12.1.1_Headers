/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DPDataRecorder_DPDataRecorderKeyProperties;
@interface _DPWordRecorder : NSObject {

	unsigned long long _wordFragmentWidth;
	id<_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;

}

@property (nonatomic,readonly) id<_DPDataRecorder><_DPDataRecorderKeyProperties> recorder;              //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,readonly) unsigned long long wordFragmentWidth;                                    //@synthesize wordFragmentWidth=_wordFragmentWidth - In the implementation block
-(id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(BOOL)arg3 ;
-(unsigned long long)wordFragmentWidth;
-(id<_DPDataRecorder><_DPDataRecorderKeyProperties>)recorder;
-(id)initWithKey:(id)arg1 ;
-(BOOL)record:(id)arg1 ;
-(id)init;
-(id)description;
@end

