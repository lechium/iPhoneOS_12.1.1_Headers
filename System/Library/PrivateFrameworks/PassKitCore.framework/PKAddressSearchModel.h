/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKLocalSearchCompleterDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol PKAddressSearchModelDelegate, OS_dispatch_queue;
@class NSArray, CLLocationManager, MKLocalSearchCompleter, CLGeocoder, MKLocalSearch, CNContactStore, NSObject, NSString;

@interface PKAddressSearchModel : NSObject <MKLocalSearchCompleterDelegate, CLLocationManagerDelegate> {

	NSArray* _contactsSearchResults;
	NSArray* _completionSearchResults;
	NSArray* _recentsSearchResults;
	id<PKAddressSearchModelDelegate> _delegate;
	CLLocationManager* _locationManager;
	MKLocalSearchCompleter* _completer;
	CLGeocoder* _geocoder;
	MKLocalSearch* _localSearch;
	CNContactStore* _contactStore;
	NSObject*<OS_dispatch_queue> _resultsQueue;

}

@property (nonatomic,retain) CLLocationManager * locationManager;                           //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompleter * completer;                            //@synthesize completer=_completer - In the implementation block
@property (nonatomic,retain) CLGeocoder * geocoder;                                         //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,retain) MKLocalSearch * localSearch;                                   //@synthesize localSearch=_localSearch - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resultsQueue;                     //@synthesize resultsQueue=_resultsQueue - In the implementation block
@property (nonatomic,readonly) NSArray * completionSearchResults; 
@property (nonatomic,readonly) NSArray * contactsSearchResults; 
@property (nonatomic,readonly) NSArray * recentsSearchResults;                              //@synthesize recentsSearchResults=_recentsSearchResults - In the implementation block
@property (assign,nonatomic,__weak) id<PKAddressSearchModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completerDidUpdateResults:(id)arg1 ;
-(void)_updateRecents:(id)arg1 ;
-(void)_resetContactsSearchResults;
-(NSArray *)recentsSearchResults;
-(MKLocalSearchCompleter *)completer;
-(void)setCompleter:(MKLocalSearchCompleter *)arg1 ;
-(MKLocalSearch *)localSearch;
-(void)setLocalSearch:(MKLocalSearch *)arg1 ;
-(NSObject*<OS_dispatch_queue>)resultsQueue;
-(void)setResultsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)endSearch;
-(void)selectMapSearchCompletion:(id)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(NSArray *)completionSearchResults;
-(NSArray *)contactsSearchResults;
-(CLLocationManager *)locationManager;
-(void)setGeocoder:(CLGeocoder *)arg1 ;
-(CLGeocoder *)geocoder;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(id)init;
-(void)setDelegate:(id<PKAddressSearchModelDelegate>)arg1 ;
-(id<PKAddressSearchModelDelegate>)delegate;
@end

