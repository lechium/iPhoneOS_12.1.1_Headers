/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface BRUITestDiagnostic : NSObject {

	NSString* _outputDirectoryPath;
	NSMutableDictionary* _diagnosticDataBySectionName;

}
-(void)addDiagnosticData:(id)arg1 forFilename:(id)arg2 sectionName:(id)arg3 ;
-(id)initWithOutputDirectoryPath:(id)arg1 ;
-(void)addDiagnosticData:(id)arg1 forFilename:(id)arg2 ;
-(BOOL)writeToDiskWithError:(id*)arg1 ;
@end

