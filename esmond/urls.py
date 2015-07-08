from django.conf.urls.defaults import *

# Uncomment the next two lines to enable the admin:
from django.contrib import admin
admin.autodiscover()

from esmond.api.api import v1_api
from esmond.api.perfsonar.api import perfsonar_api

from rest_framework import routers
from esmond.api.drf_api import (
    DataViewset,
    DeviceViewset,
    InterfaceViewset,
    OidsetViewset
)

router = routers.DefaultRouter()
router.register('oidset', OidsetViewset)
router.register('interface', InterfaceViewset,)
router.register('device', DeviceViewset)

urlpatterns = patterns('',
    # Example:
    # (r'^ed/', include('ed.foo.urls')),

    # Uncomment the admin/doc line below and add 'django.contrib.admindocs' 
    # to INSTALLED_APPS to enable admin documentation:
    # (r'^admin/doc/', include('django.contrib.admindocs.urls')),

    # Uncomment the next line to enable the admin:
    (r'^admin/', include(admin.site.urls)),
    (r'', include(v1_api.urls + perfsonar_api.urls)),
    (r'v2/',include(router.urls)),
    (r'v2/interface/(?P<lookup>[^/]+)/(?P<type>[^/]+)$', DataViewset.as_view({'get': 'retrieve'})),
    (r'v2/interface/(?P<lookup>[^/]+)/(?P<type>[^/]+)/(?P<subtype>.+)$', DataViewset.as_view({'get': 'retrieve'})),
)
