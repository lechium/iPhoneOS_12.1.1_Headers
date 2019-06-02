/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactSuggestionViewControllerDataSource.h>

@class NSString, NSAttributedString, NSURL, SGOrigin;

@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject <CNContactSuggestionViewControllerDataSource> {

	SGOrigin* _origin;

}

@property (nonatomic,retain) SGOrigin * origin;                                    //@synthesize origin=_origin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * appName; 
@property (nonatomic,readonly) NSAttributedString * formattedSnippet; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * date; 
@property (nonatomic,readonly) NSString * from; 
@property (nonatomic,readonly) NSURL * url; 
+(id)contactSuggestionTypeBySuggestionType;
+(id)dateFormatter;
-(NSString *)from;
-(NSAttributedString *)formattedSnippet;
-(id)initWithSGOrigin:(id)arg1 ;
-(NSString *)title;
-(unsigned long long)type;
-(NSString *)date;
-(SGOrigin *)origin;
-(void)setOrigin:(SGOrigin *)arg1 ;
-(NSURL *)url;
-(NSString *)appName;
@end
