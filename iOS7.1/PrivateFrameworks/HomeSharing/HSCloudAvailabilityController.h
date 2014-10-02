//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSCloudAvailability.h"
#import "RadiosPreferencesDelegate.h"

@class NSObject<OS_dispatch_queue>, RadiosPreferences;

@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, HSCloudAvailability>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _isAirplaneModeActive;
    BOOL _isAutoDownloadOnCellularAllowed;
    BOOL _isCellularDataActive;
    BOOL _isShowingAllMusic;
    BOOL _isShowingAllVideo;
    BOOL _isUpdateInProgress;
    BOOL _isWiFiEnabled;
    BOOL _isNetworkReachable;
    BOOL _canShowCloudMusic;
    BOOL _canShowCloudVideo;
    BOOL _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    int _networkType;
    RadiosPreferences *_radiosPreferences;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)sharedController;
- (BOOL)_uncachedIsShowingAllVideo;
- (BOOL)_uncachedIsShowingAllMusic;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)arg1;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)arg1;
- (void)_setNewIsNetworkReachable:(BOOL)arg1;
- (BOOL)_hasWiFiCapability;
- (BOOL)_hasCellularCapability;
- (void)_handleTelephonyNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_wifiEnabledDidChangeNotification:(id)arg1;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (void)airplaneModeChanged;
- (BOOL)isNetworkReachable;
- (BOOL)canShowCloudVideo;
- (BOOL)canShowCloudMusic;
- (BOOL)canShowCloudDownloadButtons;
- (void)dealloc;
- (id)init;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)isCellularDataRestricted;
- (BOOL)hasProperNetworkConditionsToPlayMedia;

@end
